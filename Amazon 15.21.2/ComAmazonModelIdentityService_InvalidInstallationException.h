//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ComAmazonModelIdentityService_InstallationId, ComAmazonModelIdentityService_InstallationSpecification, NSString;

@interface ComAmazonModelIdentityService_InvalidInstallationException : CoralModel <NSCoding, NSCopying>
{
    ComAmazonModelIdentityService_InstallationId *_installationId;
    ComAmazonModelIdentityService_InstallationSpecification *_existingSpecification;
    NSString *_message;
}

+ (id)type;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) ComAmazonModelIdentityService_InstallationSpecification *existingSpecification; // @synthesize existingSpecification=_existingSpecification;
@property(retain, nonatomic) ComAmazonModelIdentityService_InstallationId *installationId; // @synthesize installationId=_installationId;
- (void).cxx_destruct;

@end
