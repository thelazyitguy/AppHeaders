//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSString;

@interface AWSIoTSigV4Authorization : AWSModel
{
    NSString *_roleArn;
    NSString *_serviceName;
    NSString *_signingRegion;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *signingRegion; // @synthesize signingRegion=_signingRegion;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *roleArn; // @synthesize roleArn=_roleArn;
- (void).cxx_destruct;

@end
