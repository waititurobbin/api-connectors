/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * OrderRes.h
 *
 * Place new order response
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_OrderRes_H_
#define IO_SWAGGER_CLIENT_MODEL_OrderRes_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Place new order response
/// </summary>
class  OrderRes
    : public ModelBase
{
public:
    OrderRes();
    virtual ~OrderRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OrderRes members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderId() const;
    bool orderIdIsSet() const;
    void unsetOrder_id();
    void setOrderId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getUserId() const;
    bool userIdIsSet() const;
    void unsetUser_id();
    void setUserId(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderType() const;
    bool orderTypeIsSet() const;
    void unsetOrder_type();
    void setOrderType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getQty() const;
    bool qtyIsSet() const;
    void unsetQty();
    void setQty(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimeInForce() const;
    bool timeInForceIsSet() const;
    void unsetTime_in_force();
    void setTimeInForce(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderStatus() const;
    bool orderStatusIsSet() const;
    void unsetOrder_status();
    void setOrderStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getLastExecTime() const;
    bool lastExecTimeIsSet() const;
    void unsetLast_exec_time();
    void setLastExecTime(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLastExecPrice() const;
    bool lastExecPriceIsSet() const;
    void unsetLast_exec_price();
    void setLastExecPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLeavesQty() const;
    bool leavesQtyIsSet() const;
    void unsetLeaves_qty();
    void setLeavesQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumExecQty() const;
    bool cumExecQtyIsSet() const;
    void unsetCum_exec_qty();
    void setCumExecQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumExecValue() const;
    bool cumExecValueIsSet() const;
    void unsetCum_exec_value();
    void setCumExecValue(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumExecFee() const;
    bool cumExecFeeIsSet() const;
    void unsetCum_exec_fee();
    void setCumExecFee(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRejectReason() const;
    bool rejectReasonIsSet() const;
    void unsetReject_reason();
    void setRejectReason(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderLinkId() const;
    bool orderLinkIdIsSet() const;
    void unsetOrder_link_id();
    void setOrderLinkId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetCreated_at();
    void setCreatedAt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetUpdated_at();
    void setUpdatedAt(utility::string_t value);

protected:
    utility::string_t m_Order_id;
    bool m_Order_idIsSet;
    double m_User_id;
    bool m_User_idIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    utility::string_t m_Order_type;
    bool m_Order_typeIsSet;
    double m_Price;
    bool m_PriceIsSet;
    utility::string_t m_Qty;
    bool m_QtyIsSet;
    utility::string_t m_Time_in_force;
    bool m_Time_in_forceIsSet;
    utility::string_t m_Order_status;
    bool m_Order_statusIsSet;
    double m_Last_exec_time;
    bool m_Last_exec_timeIsSet;
    double m_Last_exec_price;
    bool m_Last_exec_priceIsSet;
    double m_Leaves_qty;
    bool m_Leaves_qtyIsSet;
    double m_Cum_exec_qty;
    bool m_Cum_exec_qtyIsSet;
    double m_Cum_exec_value;
    bool m_Cum_exec_valueIsSet;
    double m_Cum_exec_fee;
    bool m_Cum_exec_feeIsSet;
    utility::string_t m_Reject_reason;
    bool m_Reject_reasonIsSet;
    utility::string_t m_Order_link_id;
    bool m_Order_link_idIsSet;
    utility::string_t m_Created_at;
    bool m_Created_atIsSet;
    utility::string_t m_Updated_at;
    bool m_Updated_atIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_OrderRes_H_ */
