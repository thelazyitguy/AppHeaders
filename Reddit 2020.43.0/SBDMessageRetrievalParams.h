//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SendBirdSDK/NSCopying-Protocol.h>

@class NSString;

@interface SBDMessageRetrievalParams : NSObject <NSCopying>
{
    _Bool _includeMetaArray;
    _Bool _includeParentMessageText;
    _Bool _includeThreadInfo;
    NSString *_channelUrl;
    unsigned long long _channelType;
    long long _messageId;
}

@property _Bool includeThreadInfo; // @synthesize includeThreadInfo=_includeThreadInfo;
@property _Bool includeParentMessageText; // @synthesize includeParentMessageText=_includeParentMessageText;
@property _Bool includeMetaArray; // @synthesize includeMetaArray=_includeMetaArray;
@property long long messageId; // @synthesize messageId=_messageId;
@property unsigned long long channelType; // @synthesize channelType=_channelType;
@property(retain) NSString *channelUrl; // @synthesize channelUrl=_channelUrl;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

