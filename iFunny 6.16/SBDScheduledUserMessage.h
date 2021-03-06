//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, SBDSender;

@interface SBDScheduledUserMessage : NSObject
{
    long long _scheduledId;
    NSString *_scheduledDateTimeString;
    NSString *_scheduledTimezone;
    unsigned long long _status;
    long long _errorCode;
    NSString *_errorMessage;
    unsigned long long _pushOption;
    long long _createdAt;
    long long _updatedAt;
    unsigned long long _mentionType;
    NSArray *_mentionedUsers;
    NSString *_channelUrl;
    SBDSender *_sender;
    NSString *_message;
    NSString *_data;
    NSString *_customType;
    NSArray *_targetLanguages;
    NSArray *_metaArrays;
    NSString *_channelType;
}

@property(retain) NSString *channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) NSArray *metaArrays; // @synthesize metaArrays=_metaArrays;
@property(retain) NSArray *targetLanguages; // @synthesize targetLanguages=_targetLanguages;
@property(retain) NSString *customType; // @synthesize customType=_customType;
@property(retain) NSString *data; // @synthesize data=_data;
@property(retain) NSString *message; // @synthesize message=_message;
@property(retain) SBDSender *sender; // @synthesize sender=_sender;
@property(retain) NSString *channelUrl; // @synthesize channelUrl=_channelUrl;
@property(retain) NSArray *mentionedUsers; // @synthesize mentionedUsers=_mentionedUsers;
@property unsigned long long mentionType; // @synthesize mentionType=_mentionType;
@property long long updatedAt; // @synthesize updatedAt=_updatedAt;
@property long long createdAt; // @synthesize createdAt=_createdAt;
@property unsigned long long pushOption; // @synthesize pushOption=_pushOption;
@property(retain) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property long long errorCode; // @synthesize errorCode=_errorCode;
@property unsigned long long status; // @synthesize status=_status;
@property(retain) NSString *scheduledTimezone; // @synthesize scheduledTimezone=_scheduledTimezone;
@property(retain) NSString *scheduledDateTimeString; // @synthesize scheduledDateTimeString=_scheduledDateTimeString;
@property long long scheduledId; // @synthesize scheduledId=_scheduledId;
- (void).cxx_destruct;
- (id)metaArraysWithKeys:(id)arg1;
- (id)getMetaArrayWithKeys:(id)arg1;
- (id)metaArray;
@property(readonly, nonatomic, getter=getAllMetaArray) NSDictionary *metaArray;
- (_Bool)isGroupChannel;
- (_Bool)isOpenChannel;
- (id)initWithDictionary:(id)arg1;

@end

