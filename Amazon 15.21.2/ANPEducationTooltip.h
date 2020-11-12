//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer, NSUserDefaults;
@protocol ANXWeblabTriggerService;

@interface ANPEducationTooltip : NSObject
{
    _Bool _showEducationTooltip;
    NSString *_cacheKey;
    NSDate *_refreshTimestamp;
    double _notificationReUpdateInterval;
    NSUserDefaults *_cache;
    long long _tabIndex;
    NSString *_tooltipText;
    long long _tooltipType;
    unsigned long long _maxNoOfTimesToBeShown;
    NSTimer *_timer;
    id <ANXWeblabTriggerService> _weblabTriggerService;
    unsigned long long _noOfTimesShown;
}

@property(nonatomic) unsigned long long noOfTimesShown; // @synthesize noOfTimesShown=_noOfTimesShown;
@property(retain, nonatomic) id <ANXWeblabTriggerService> weblabTriggerService; // @synthesize weblabTriggerService=_weblabTriggerService;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long maxNoOfTimesToBeShown; // @synthesize maxNoOfTimesToBeShown=_maxNoOfTimesToBeShown;
@property(nonatomic) long long tooltipType; // @synthesize tooltipType=_tooltipType;
@property(retain, nonatomic) NSString *tooltipText; // @synthesize tooltipText=_tooltipText;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSUserDefaults *cache; // @synthesize cache=_cache;
@property(nonatomic) double notificationReUpdateInterval; // @synthesize notificationReUpdateInterval=_notificationReUpdateInterval;
@property(nonatomic) _Bool showEducationTooltip; // @synthesize showEducationTooltip=_showEducationTooltip;
@property(retain, nonatomic) NSDate *refreshTimestamp; // @synthesize refreshTimestamp=_refreshTimestamp;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (void).cxx_destruct;
- (void)startTimer;
- (void)updateNotificationIfTimeElapsed:(id)arg1;
- (void)stopTimer;
- (void)clearTimestamp;
- (void)saveTimestamp;
- (id)init;

@end
