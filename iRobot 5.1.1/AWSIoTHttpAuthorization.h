//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class AWSIoTSigV4Authorization;

@interface AWSIoTHttpAuthorization : AWSModel
{
    AWSIoTSigV4Authorization *_sigv4;
}

+ (id)sigv4JSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSIoTSigV4Authorization *sigv4; // @synthesize sigv4=_sigv4;
- (void).cxx_destruct;

@end
