//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSData, NSString;
@protocol MLCDMSessionDelegate;

@protocol MLCDMSession <NSObject>
@property(nonatomic) __weak id <MLCDMSessionDelegate> delegate;
@property(readonly, nonatomic) NSString *ID;
- (_Bool)hasUsableKeyID:(NSData *)arg1;
- (_Bool)hasReceivedKeys;
- (_Bool)closeAndReturnError:(id *)arg1;
- (_Bool)updateWithLicense:(NSData *)arg1 error:(id *)arg2;
- (_Bool)generateLicenseRequest:(NSData *)arg1 error:(id *)arg2;
@end

