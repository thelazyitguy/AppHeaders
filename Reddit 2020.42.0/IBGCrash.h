//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Instabug/IBGCachable-Protocol.h>
#import <Instabug/IBGLocalAttachmentRequestDelegate-Protocol.h>
#import <Instabug/IBGReportRequestDelegate-Protocol.h>

@class NSDate, NSDictionary, NSMutableArray, NSString;

@interface IBGCrash : NSObject <IBGReportRequestDelegate, IBGLocalAttachmentRequestDelegate, IBGCachable>
{
    _Bool _isHandled;
    _Bool _isSent;
    NSString *_identifier;
    NSString *_comment;
    NSString *_email;
    NSDate *_date;
    NSString *_autoScreenRecordingIdentifier;
    NSString *_persistenceKey;
    NSDictionary *_dataStoreSnapshot;
    NSMutableArray *_attachmentsObjects;
}

@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
@property(retain, nonatomic) NSMutableArray *attachmentsObjects; // @synthesize attachmentsObjects=_attachmentsObjects;
@property(retain, nonatomic) NSDictionary *dataStoreSnapshot; // @synthesize dataStoreSnapshot=_dataStoreSnapshot;
@property(copy, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(copy, nonatomic) NSString *autoScreenRecordingIdentifier; // @synthesize autoScreenRecordingIdentifier=_autoScreenRecordingIdentifier;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) _Bool isHandled; // @synthesize isHandled=_isHandled;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)localAttachmentRequestSucceeded:(id)arg1;
- (id)attachmentRequestCreator;
- (void)removeIfFullySent;
- (void)remove;
- (void)save;
- (long long)attachmentsCount;
- (void)send;
- (_Bool)isFullySent;
- (id)oldCrashId;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryValue;
- (void)reportRequestDone:(id)arg1 withReportID:(id)arg2 isSuccess:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (void)sendAllAttachments;
- (_Bool)hasAttachment;
- (void)addAttachment:(id)arg1;
- (void)submit;
- (id)coderNameForSelector:(SEL)arg1;
- (id)initWithTempCrash:(id)arg1;
- (id)initWithSnapshot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

