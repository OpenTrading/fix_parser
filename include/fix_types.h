/// @file   fix_types.h
/// @author Dmitry S. Melnikov, dmitryme@gmail.com
/// @date   Created on: 07/31/2012 10:22:19 AM

#ifndef FIX_PARSER_FIX_TYPES_H
#define FIX_PARSER_FIX_TYPES_H

typedef enum FIXTagType_
{
   FIXTagType_Value = 1,
   FIXTagType_Group = 2
} FIXTagType;

typedef enum FIXProtocolVerEnum_
{
   FIX42,
   FIX44,
   FIX50,
   FIX50SP1,
   FIX50SP2,
   FIXT11,
   FIX_MUST_BE_LAST_DO_NOT_USE_OR_CHANGE_IT
} FIXProtocolVerEnum;

typedef enum FIXFieldTypeEnum_
{
   FIXFieldType_Unknown              = -1,
   FIXFieldType_Int                  = 1,
   FIXFieldType_Length               = 2,
   FIXFieldType_NumInGroup           = 3,
   FIXFieldType_SeqNum               = 4,
   FIXFieldType_TagNum               = 5,
   FIXFieldType_DayOfMonth           = 6,
   FIXFieldType_Float                = 7,
   FIXFieldType_Qty                  = 8,
   FIXFieldType_Price                = 9,
   FIXFieldType_PriceOffset          = 10,
   FIXFieldType_Amt                  = 11,
   FIXFieldType_Percentage           = 12,
   FIXFieldType_Char                 = 13,
   FIXFieldType_Boolean              = 14,
   FIXFieldType_String               = 15,
   FIXFieldType_MultipleValueString  = 16,
   FIXFieldType_Country              = 17,
   FIXFieldType_Currency             = 18,
   FIXFieldType_Exchange             = 19,
   FIXFieldType_MonthYear            = 20,
   FIXFieldType_UTCTimestamp         = 21,
   FIXFieldType_UTCTimeOnly          = 22,
   FIXFieldType_UTCDateOnly          = 23,
   FIXFieldType_LocalMktDate         = 24,
   FIXFieldType_Data                 = 25,
   FIXFieldType_TZTimeOnly           = 26,
   FIXFieldType_TZTimestamp          = 27,
   FIXFieldType_XMLData              = 28,
   FIXFieldType_Language             = 29
} FIXFieldTypeEnum;

#endif // FIX_PARSER_FIX_TYPES_H