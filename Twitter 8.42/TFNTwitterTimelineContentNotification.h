//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterTimelineUpdateDisplayActionNotification-Protocol.h>

@class NSArray, NSString;

@interface TFNTwitterTimelineContentNotification : NSObject <TFNTwitterTimelineUpdateDisplayActionNotification>
{
    _Bool _usersAreValid;
    NSString *_localizedText;
    double _triggerDelay;
    double _displayDuration;
    long long _displayLocation;
    NSString *_navigateToEntryID;
    long long _iconType;
    NSArray *_users;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool usersAreValid; // @synthesize usersAreValid=_usersAreValid;
@property(readonly, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(readonly, nonatomic) NSString *navigateToEntryID; // @synthesize navigateToEntryID=_navigateToEntryID;
@property(readonly, nonatomic) long long displayLocation; // @synthesize displayLocation=_displayLocation;
@property(readonly, nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(readonly, nonatomic) double triggerDelay; // @synthesize triggerDelay=_triggerDelay;
@property(readonly, copy, nonatomic) NSString *localizedText; // @synthesize localizedText=_localizedText;
@property(readonly, copy) NSString *description;
- (double)_timeIntervalForKey:(id)arg1 inDictionary:(id)arg2 defaultValue:(double)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithLocalizedText:(id)arg1 triggerDelay:(double)arg2 displayDuration:(double)arg3 users:(id)arg4 usersAreValid:(_Bool)arg5;
- (id)initWithLocalizedText:(id)arg1 triggerDelay:(double)arg2 displayDuration:(double)arg3 iconType:(long long)arg4 displayLocation:(long long)arg5 navigateToEntryID:(id)arg6 users:(id)arg7 usersAreValid:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
