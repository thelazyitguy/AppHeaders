//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSModel.h>

@class NSString;

@interface AWSIoTUpdateDomainConfigurationResponse : AWSModel
{
    NSString *_domainConfigurationArn;
    NSString *_domainConfigurationName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *domainConfigurationName; // @synthesize domainConfigurationName=_domainConfigurationName;
@property(retain, nonatomic) NSString *domainConfigurationArn; // @synthesize domainConfigurationArn=_domainConfigurationArn;
- (void).cxx_destruct;

@end

