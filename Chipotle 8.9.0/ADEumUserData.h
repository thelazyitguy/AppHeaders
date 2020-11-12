//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADEumUserDataMap;

@interface ADEumUserData : NSObject
{
    ADEumUserDataMap *_userDataMapString;
    ADEumUserDataMap *_userDataMapLong;
    ADEumUserDataMap *_userDataMapBoolean;
    ADEumUserDataMap *_userDataMapDouble;
    ADEumUserDataMap *_userDataMapTimestampMs;
}

@property(retain, nonatomic) ADEumUserDataMap *userDataMapTimestampMs; // @synthesize userDataMapTimestampMs=_userDataMapTimestampMs;
@property(retain, nonatomic) ADEumUserDataMap *userDataMapDouble; // @synthesize userDataMapDouble=_userDataMapDouble;
@property(retain, nonatomic) ADEumUserDataMap *userDataMapBoolean; // @synthesize userDataMapBoolean=_userDataMapBoolean;
@property(retain, nonatomic) ADEumUserDataMap *userDataMapLong; // @synthesize userDataMapLong=_userDataMapLong;
@property(retain, nonatomic) ADEumUserDataMap *userDataMapString; // @synthesize userDataMapString=_userDataMapString;
- (void).cxx_destruct;
- (id)getAllUserDataTimestampMs;
- (id)getAllUserDataDouble;
- (id)getAllUserDataBoolean;
- (id)getAllUserDataLong;
- (id)getAllUserDataString;
- (void)set:(id)arg1 timestampMsValue:(id)arg2;
- (void)set:(id)arg1 doubleValue:(id)arg2;
- (void)set:(id)arg1 booleanValue:(id)arg2;
- (void)set:(id)arg1 longValue:(id)arg2;
- (void)set:(id)arg1 stringValue:(id)arg2;
- (id)init;

@end
