//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRProductMetadata, NSString;

@interface AIRBillItem : AIRModel
{
    NSString *_billId;
    NSString *_productType;
    NSString *_status;
    NSString *_token;
    AIRProductMetadata *_productMetadata;
}

+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRProductMetadata *productMetadata; // @synthesize productMetadata=_productMetadata;
@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *billId; // @synthesize billId=_billId;

@end

