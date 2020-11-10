//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNDirectMessageAttachment.h>

#import <T1Twitter/TFNDirectMessageTweetAttachment-Protocol.h>

@class NSString, TFNTwitterStatus;
@protocol TFNDirectMessageEntry;

@interface TFNDirectMessageTweetAttachment : TFNDirectMessageAttachment <TFNDirectMessageTweetAttachment>
{
    NSString *_displayURL;
    NSString *_expandedURL;
    TFNTwitterStatus *_status;
    long long _tweetID;
    NSString *_url;
    struct _NSRange _urlRange;
}

- (void).cxx_destruct;
@property(nonatomic) struct _NSRange urlRange; // @synthesize urlRange=_urlRange;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long tweetID; // @synthesize tweetID=_tweetID;
@property(retain, nonatomic) TFNTwitterStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *expandedURL; // @synthesize expandedURL=_expandedURL;
@property(copy, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
- (void)_statusDidUpdate:(id)arg1;
- (void)_observeStatusUpdateNotifications;
@property(readonly, nonatomic) _Bool isPossiblySensitive;
- (struct _NSRange)rangeInMessageText;
- (long long)attachmentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setParameterDataForRequestDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithJSONDictionary:(id)arg1 messageText:(id)arg2 entities:(id)arg3;
- (id)initWithStatus:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <TFNDirectMessageEntry> messageEntry;
@property(readonly) Class superclass;

@end

