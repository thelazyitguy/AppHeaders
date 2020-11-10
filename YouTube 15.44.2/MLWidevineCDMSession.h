//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLCDMSession-Protocol.h>

@class NSMutableArray, NSString;
@protocol MLCDMSessionDelegate, MLWidevineCDM, OS_dispatch_queue;

@interface MLWidevineCDMSession : NSObject <MLCDMSession>
{
    id <MLWidevineCDM> _CDM;
    NSMutableArray *_keyIDs;
    NSMutableArray *_usableKeyIDs;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_ID;
    id <MLCDMSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MLCDMSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (_Bool)hasUsableKeyID:(id)arg1;
- (_Bool)hasReceivedKeys;
- (_Bool)closeAndReturnError:(id *)arg1;
- (_Bool)updateWithLicense:(id)arg1 error:(id *)arg2;
- (_Bool)generateLicenseRequest:(id)arg1 error:(id *)arg2;
- (void)addKeyID:(id)arg1 isUsable:(_Bool)arg2;
- (id)initWithSessionID:(id)arg1 CDM:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
