//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GWA2FunctionalData.h>

@class ORCH2EncryptionData, ORCH2EncryptionSecureDataValue;

@interface GWA2EncryptionData : GWA2FunctionalData
{
    ORCH2EncryptionData *_encryptionDataExtension;
    ORCH2EncryptionSecureDataValue *_encryptionSecureDataValueExtension;
}

- (void).cxx_destruct;
- (id)encryptPayload;
- (void)executionStateUpdatedToFailed;
- (void)executionStateUpdatedToCancelled;
- (void)executionStateUpdatedToCompleted;
- (void)executionStateUpdatedToRunning;
- (void)updateDataValue:(id)arg1;
- (id)initWithData:(id)arg1 pageContext:(id)arg2;

@end

