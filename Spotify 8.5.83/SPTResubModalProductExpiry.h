//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDate;
@protocol SPTProductState;

@interface SPTResubModalProductExpiry : NSObject
{
    id <SPTProductState> _productState;
    NSCalendar *_calendar;
    NSDate *_expiryDate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (long long)ID;
- (long long)expiryPeriod;
- (long long)daysFromDate:(id)arg1;
- (long long)numberOfDaysRemaining;
- (id)initWithProductState:(id)arg1;

@end

