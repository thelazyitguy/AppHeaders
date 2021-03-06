//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IOSShared/SDModelObject.h>

@class NSArray, NSDate;
@protocol WMCheckinStatus;

@interface WMCheckinStatus : SDModelObject
{
    unsigned long long _status;
    NSDate *_date;
    NSArray<WMCheckinStatus> *_history;
}

+ (_Bool)isStatusOpen:(unsigned long long)arg1;
+ (id)statusStringForCustomerStatus:(unsigned long long)arg1;
+ (unsigned long long)mapStatus:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray<WMCheckinStatus> *history; // @synthesize history=_history;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void)mapTimestamp:(id)arg1;
- (void)setOrderStatus:(id)arg1;
- (_Bool)validModel;
- (id)mappingDictionaryForData:(id)arg1;

@end

