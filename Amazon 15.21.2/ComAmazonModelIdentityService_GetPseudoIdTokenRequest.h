//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ComAmazonModelIdentityService_InstallationId, NSArray;

@interface ComAmazonModelIdentityService_GetPseudoIdTokenRequest : CoralModel <NSCoding, NSCopying>
{
    NSArray *_clientIdTypes;
    ComAmazonModelIdentityService_InstallationId *_installationId;
}

+ (id)listTypeForProperty:(id)arg1;
+ (id)type;
@property(retain, nonatomic) ComAmazonModelIdentityService_InstallationId *installationId; // @synthesize installationId=_installationId;
@property(retain, nonatomic) NSArray *clientIdTypes; // @synthesize clientIdTypes=_clientIdTypes;
- (void).cxx_destruct;

@end

