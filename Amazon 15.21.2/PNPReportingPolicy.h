//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PNPReportingPolicy : NSObject
{
    double _validatedTimeoutInSeconds;
    unsigned long long _validatedRetries;
}

@property(nonatomic) unsigned long long validatedRetries; // @synthesize validatedRetries=_validatedRetries;
@property(nonatomic) double validatedTimeoutInSeconds; // @synthesize validatedTimeoutInSeconds=_validatedTimeoutInSeconds;
- (void)calculateValidatedRetries:(id)arg1;
- (void)calculateValidatedTimeout:(id)arg1;
- (id)initWithTimeout:(id)arg1 andRetries:(id)arg2;
- (id)init;

@end
