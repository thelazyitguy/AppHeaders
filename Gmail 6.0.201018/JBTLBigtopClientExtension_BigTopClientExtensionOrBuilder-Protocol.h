//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JBTLAccountInfo, JBTLBigtopClientExtension_BigTopClientEntry, JBTLBigtopClientExtension_ClientState, JBTLClientInfo;

@protocol JBTLBigtopClientExtension_BigTopClientExtensionOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JBTLBigtopClientExtension_BigTopClientEntry *)getClientEntry;
- (_Bool)hasClientEntry;
- (int)getNumOfAccounts;
- (_Bool)hasNumOfAccounts;
- (JBTLAccountInfo *)getAccountInfo;
- (_Bool)hasAccountInfo;
- (JBTLBigtopClientExtension_ClientState *)getClientState;
- (_Bool)hasClientState;
- (JBTLClientInfo *)getClientInfo;
- (_Bool)hasClientInfo;
@end
