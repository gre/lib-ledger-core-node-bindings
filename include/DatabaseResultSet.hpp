// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_DATABASERESULTSET_HPP
#define DJINNI_GENERATED_DATABASERESULTSET_HPP

#include <cstdint>
#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class DatabaseError;
class DatabaseResultRow;

/**
 * ResultSet is a cursor over a query result. It allows user to iterate through query rows. When you start iterating through
 * result the cursor is placed before the first element of the set.
 */
class DatabaseResultSet {
public:
    virtual ~DatabaseResultSet() {}

    /**
     * Retrieve the current row pointed by the DatabaseResultSet. Return null if there is no row to retrieve.
     * @return The current row
     */
    virtual std::shared_ptr<DatabaseResultRow> getRow() = 0;

    /** Get the number of rows updated by the query (UPDATE, INSERT, DELETE...) */
    virtual int32_t getUpdateCount() = 0;

    /**
     * Returns true if the result set has at least one remaining row to get.
     * @return true if the result set has at least one remaining row to get, false otherwise.
     */
    virtual bool hasNext() = 0;

    /**
     * Returns the number of remaining rows before the result set needs to load more rows
     * @return The number of remaining rows before the result set needs to load more rows.
     */
    virtual int32_t available() = 0;

    /**
     * Internally move the result set to the next available row. This method may fail if there is no further row to fetch.
     * @return Return a result set pointing to the next row.
     */
    virtual void next() = 0;

    /** Close the result set. */
    virtual void close() = 0;

    /** Get the last error that occured on the database. */
    virtual std::shared_ptr<DatabaseError> getError() = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_DATABASERESULTSET_HPP
