//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSArray;

@interface AWSIoTStartOnDemandAuditTaskRequest : AWSRequest
{
    NSArray *_targetCheckNames;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *targetCheckNames; // @synthesize targetCheckNames=_targetCheckNames;
- (void).cxx_destruct;

@end
