//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface CO_Product_N_Cart : NSObject
{
    NSMutableString *sShortDesc;
    NSMutableString *sProductNumber;
    NSMutableString *sItemNumber;
    NSMutableString *sColorCode;
    NSMutableString *sSizeCode;
    NSMutableString *sQuantity;
    NSMutableString *sAvailInd;
    NSMutableString *sRefVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *sRefVC; // @synthesize sRefVC;
@property(retain, nonatomic) NSMutableString *sAvailInd; // @synthesize sAvailInd;
@property(retain, nonatomic) NSMutableString *sQuantity; // @synthesize sQuantity;
@property(retain, nonatomic) NSMutableString *sSizeCode; // @synthesize sSizeCode;
@property(retain, nonatomic) NSMutableString *sColorCode; // @synthesize sColorCode;
@property(retain, nonatomic) NSMutableString *sItemNumber; // @synthesize sItemNumber;
@property(retain, nonatomic) NSMutableString *sProductNumber; // @synthesize sProductNumber;
@property(retain, nonatomic) NSMutableString *sShortDesc; // @synthesize sShortDesc;
- (id)init:(id)arg1;

@end

