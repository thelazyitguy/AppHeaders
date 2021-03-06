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

@interface AnalyticsScheduledPost : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _idIsSet;
    _Bool _creator_user_idIsSet;
    _Bool _last_modified_user_idIsSet;
    _Bool _created_timestampIsSet;
    _Bool _submission_timestampIsSet;
    _Bool _timezoneIsSet;
    _Bool _is_recurring;
    _Bool _is_recurringIsSet;
    _Bool _recurring_frequencyIsSet;
    _Bool _recurring_intervalsIsSet;
    _Bool _recurring_interval_periodIsSet;
    _Bool _number_recurrencesIsSet;
    _Bool _milestone_typeIsSet;
    _Bool _submitted_post_idIsSet;
    int _recurring_intervals;
    int _number_recurrences;
    long long _id;
    NSString *_creator_user_id;
    NSString *_last_modified_user_id;
    long long _created_timestamp;
    long long _submission_timestamp;
    NSString *_timezone;
    NSString *_recurring_frequency;
    NSMutableArray *_recurring_interval_period;
    NSString *_milestone_type;
    NSString *_submitted_post_id;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool submitted_post_idIsSet; // @synthesize submitted_post_idIsSet=_submitted_post_idIsSet;
@property(copy, nonatomic) NSString *submitted_post_id; // @synthesize submitted_post_id=_submitted_post_id;
@property(nonatomic) _Bool milestone_typeIsSet; // @synthesize milestone_typeIsSet=_milestone_typeIsSet;
@property(copy, nonatomic) NSString *milestone_type; // @synthesize milestone_type=_milestone_type;
@property(nonatomic) _Bool number_recurrencesIsSet; // @synthesize number_recurrencesIsSet=_number_recurrencesIsSet;
@property(nonatomic) int number_recurrences; // @synthesize number_recurrences=_number_recurrences;
@property(nonatomic) _Bool recurring_interval_periodIsSet; // @synthesize recurring_interval_periodIsSet=_recurring_interval_periodIsSet;
@property(retain, nonatomic) NSMutableArray *recurring_interval_period; // @synthesize recurring_interval_period=_recurring_interval_period;
@property(nonatomic) _Bool recurring_intervalsIsSet; // @synthesize recurring_intervalsIsSet=_recurring_intervalsIsSet;
@property(nonatomic) int recurring_intervals; // @synthesize recurring_intervals=_recurring_intervals;
@property(nonatomic) _Bool recurring_frequencyIsSet; // @synthesize recurring_frequencyIsSet=_recurring_frequencyIsSet;
@property(copy, nonatomic) NSString *recurring_frequency; // @synthesize recurring_frequency=_recurring_frequency;
@property(nonatomic) _Bool is_recurringIsSet; // @synthesize is_recurringIsSet=_is_recurringIsSet;
@property(nonatomic) _Bool is_recurring; // @synthesize is_recurring=_is_recurring;
@property(nonatomic) _Bool timezoneIsSet; // @synthesize timezoneIsSet=_timezoneIsSet;
@property(copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) _Bool submission_timestampIsSet; // @synthesize submission_timestampIsSet=_submission_timestampIsSet;
@property(nonatomic) long long submission_timestamp; // @synthesize submission_timestamp=_submission_timestamp;
@property(nonatomic) _Bool created_timestampIsSet; // @synthesize created_timestampIsSet=_created_timestampIsSet;
@property(nonatomic) long long created_timestamp; // @synthesize created_timestamp=_created_timestamp;
@property(nonatomic) _Bool last_modified_user_idIsSet; // @synthesize last_modified_user_idIsSet=_last_modified_user_idIsSet;
@property(copy, nonatomic) NSString *last_modified_user_id; // @synthesize last_modified_user_id=_last_modified_user_id;
@property(nonatomic) _Bool creator_user_idIsSet; // @synthesize creator_user_idIsSet=_creator_user_idIsSet;
@property(copy, nonatomic) NSString *creator_user_id; // @synthesize creator_user_id=_creator_user_id;
@property(nonatomic) _Bool idIsSet; // @synthesize idIsSet=_idIsSet;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetSubmitted_post_id;
- (void)unsetMilestone_type;
- (void)unsetNumber_recurrences;
- (void)unsetRecurring_interval_period;
- (void)unsetRecurring_intervals;
- (void)unsetRecurring_frequency;
- (void)unsetIs_recurring;
- (void)unsetTimezone;
- (void)unsetSubmission_timestamp;
- (void)unsetCreated_timestamp;
- (void)unsetLast_modified_user_id;
- (void)unsetCreator_user_id;
- (void)unsetId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 creator_user_id:(id)arg2 last_modified_user_id:(id)arg3 created_timestamp:(long long)arg4 submission_timestamp:(long long)arg5 timezone:(id)arg6 is_recurring:(_Bool)arg7 recurring_frequency:(id)arg8 recurring_intervals:(int)arg9 recurring_interval_period:(id)arg10 number_recurrences:(int)arg11 milestone_type:(id)arg12 submitted_post_id:(id)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

