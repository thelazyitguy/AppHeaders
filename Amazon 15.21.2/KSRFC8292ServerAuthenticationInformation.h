//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSServerAuthenticationInformation.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface KSRFC8292ServerAuthenticationInformation : KSServerAuthenticationInformation <NSCoding, NSCopying>
{
    NSString *_certificateVersion;
    NSString *_publicKey;
}

+ (id)type;
@property(copy, nonatomic) NSString *publicKey; // @synthesize publicKey=_publicKey;
@property(copy, nonatomic) NSString *certificateVersion; // @synthesize certificateVersion=_certificateVersion;
- (void).cxx_destruct;

@end
