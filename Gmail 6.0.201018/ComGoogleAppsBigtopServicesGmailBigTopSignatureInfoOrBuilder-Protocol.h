//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailBigTopSignatureInfo_CertificateDetails, ComGoogleAppsBigtopServicesGmailBigTopSignatureInfo_SmimeSignatureError, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopServicesGmailBigTopSignatureInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getOutboundSignWithSmime;
- (_Bool)hasOutboundSignWithSmime;
- (NSString *)getAlternateVerifiedAddress;
- (_Bool)hasAlternateVerifiedAddress;
- (ComGoogleAppsBigtopServicesGmailBigTopSignatureInfo_SmimeSignatureError *)getSmimeErrorsWithInt:(int)arg1;
- (id <JavaUtilList>)getSmimeErrorsList;
- (int)getSmimeErrorsCount;
- (ComGoogleAppsBigtopServicesGmailBigTopSignatureInfo_CertificateDetails *)getCertificateDetails;
- (_Bool)hasCertificateDetails;
- (_Bool)getIsValid;
- (_Bool)hasIsValid;
@end
