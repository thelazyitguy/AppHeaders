//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GDKACLFixDomainInfoBuilder : NSObject
{
    NSString *_domainName;
    NSString *_domainDisplayName;
}

+ (id)builderFromExistingObject:(id)arg1;
+ (id)builder;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domainDisplayName; // @synthesize domainDisplayName=_domainDisplayName;
@property(copy, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
- (id)build;

@end

