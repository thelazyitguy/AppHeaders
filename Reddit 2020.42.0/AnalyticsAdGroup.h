//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSMutableArray, NSString;

@interface AnalyticsAdGroup : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _start_timestampIsSet;
    _Bool _end_timestampIsSet;
    _Bool _priorityIsSet;
    _Bool _bid_typeIsSet;
    _Bool _bid_valueIsSet;
    _Bool _goal_typeIsSet;
    _Bool _goal_valueIsSet;
    _Bool _schedule_jsonIsSet;
    _Bool _cap_typeIsSet;
    _Bool _lifetime_cap_valueIsSet;
    _Bool _daily_cap_valueIsSet;
    _Bool _frequeny_caps_jsonIsSet;
    _Bool _use_default_frequency_cap;
    _Bool _use_default_frequency_capIsSet;
    _Bool _configured_statusIsSet;
    _Bool _effective_statusIsSet;
    _Bool _nameIsSet;
    _Bool _recommended_bidIsSet;
    NSString *_id;
    long long _start_timestamp;
    long long _end_timestamp;
    NSString *_priority;
    NSString *_bid_type;
    long long _bid_value;
    NSString *_goal_type;
    long long _goal_value;
    NSMutableArray *_schedule_json;
    NSString *_cap_type;
    long long _lifetime_cap_value;
    long long _daily_cap_value;
    NSMutableArray *_frequeny_caps_json;
    NSString *_configured_status;
    NSString *_effective_status;
    NSString *_name;
    long long _recommended_bid;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool recommended_bidIsSet; // @synthesize recommended_bidIsSet=_recommended_bidIsSet;
@property(nonatomic) long long recommended_bid; // @synthesize recommended_bid=_recommended_bid;
@property(nonatomic) _Bool nameIsSet; // @synthesize nameIsSet=_nameIsSet;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool effective_statusIsSet; // @synthesize effective_statusIsSet=_effective_statusIsSet;
@property(copy, nonatomic) NSString *effective_status; // @synthesize effective_status=_effective_status;
@property(nonatomic) _Bool configured_statusIsSet; // @synthesize configured_statusIsSet=_configured_statusIsSet;
@property(copy, nonatomic) NSString *configured_status; // @synthesize configured_status=_configured_status;
@property(nonatomic) _Bool use_default_frequency_capIsSet; // @synthesize use_default_frequency_capIsSet=_use_default_frequency_capIsSet;
@property(nonatomic) _Bool use_default_frequency_cap; // @synthesize use_default_frequency_cap=_use_default_frequency_cap;
@property(nonatomic) _Bool frequeny_caps_jsonIsSet; // @synthesize frequeny_caps_jsonIsSet=_frequeny_caps_jsonIsSet;
@property(retain, nonatomic) NSMutableArray *frequeny_caps_json; // @synthesize frequeny_caps_json=_frequeny_caps_json;
@property(nonatomic) _Bool daily_cap_valueIsSet; // @synthesize daily_cap_valueIsSet=_daily_cap_valueIsSet;
@property(nonatomic) long long daily_cap_value; // @synthesize daily_cap_value=_daily_cap_value;
@property(nonatomic) _Bool lifetime_cap_valueIsSet; // @synthesize lifetime_cap_valueIsSet=_lifetime_cap_valueIsSet;
@property(nonatomic) long long lifetime_cap_value; // @synthesize lifetime_cap_value=_lifetime_cap_value;
@property(nonatomic) _Bool cap_typeIsSet; // @synthesize cap_typeIsSet=_cap_typeIsSet;
@property(copy, nonatomic) NSString *cap_type; // @synthesize cap_type=_cap_type;
@property(nonatomic) _Bool schedule_jsonIsSet; // @synthesize schedule_jsonIsSet=_schedule_jsonIsSet;
@property(retain, nonatomic) NSMutableArray *schedule_json; // @synthesize schedule_json=_schedule_json;
@property(nonatomic) _Bool goal_valueIsSet; // @synthesize goal_valueIsSet=_goal_valueIsSet;
@property(nonatomic) long long goal_value; // @synthesize goal_value=_goal_value;
@property(nonatomic) _Bool goal_typeIsSet; // @synthesize goal_typeIsSet=_goal_typeIsSet;
@property(copy, nonatomic) NSString *goal_type; // @synthesize goal_type=_goal_type;
@property(nonatomic) _Bool bid_valueIsSet; // @synthesize bid_valueIsSet=_bid_valueIsSet;
@property(nonatomic) long long bid_value; // @synthesize bid_value=_bid_value;
@property(nonatomic) _Bool bid_typeIsSet; // @synthesize bid_typeIsSet=_bid_typeIsSet;
@property(copy, nonatomic) NSString *bid_type; // @synthesize bid_type=_bid_type;
@property(nonatomic) _Bool priorityIsSet; // @synthesize priorityIsSet=_priorityIsSet;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool end_timestampIsSet; // @synthesize end_timestampIsSet=_end_timestampIsSet;
@property(nonatomic) long long end_timestamp; // @synthesize end_timestamp=_end_timestamp;
@property(nonatomic) _Bool start_timestampIsSet; // @synthesize start_timestampIsSet=_start_timestampIsSet;
@property(nonatomic) long long start_timestamp; // @synthesize start_timestamp=_start_timestamp;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetRecommended_bid;
- (void)unsetName;
- (void)unsetEffective_status;
- (void)unsetConfigured_status;
- (void)unsetUse_default_frequency_cap;
- (void)unsetFrequeny_caps_json;
- (void)unsetDaily_cap_value;
- (void)unsetLifetime_cap_value;
- (void)unsetCap_type;
- (void)unsetSchedule_json;
- (void)unsetGoal_value;
- (void)unsetGoal_type;
- (void)unsetBid_value;
- (void)unsetBid_type;
- (void)unsetPriority;
- (void)unsetEnd_timestamp;
- (void)unsetStart_timestamp;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(id)arg1 start_timestamp:(long long)arg2 end_timestamp:(long long)arg3 priority:(id)arg4 bid_type:(id)arg5 bid_value:(long long)arg6 goal_type:(id)arg7 goal_value:(long long)arg8 schedule_json:(id)arg9 cap_type:(id)arg10 lifetime_cap_value:(long long)arg11 daily_cap_value:(long long)arg12 frequeny_caps_json:(id)arg13 use_default_frequency_cap:(_Bool)arg14 configured_status:(id)arg15 effective_status:(id)arg16 name:(id)arg17 recommended_bid:(long long)arg18;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
