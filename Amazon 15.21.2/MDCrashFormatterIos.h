//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCrashFormatter.h"

@interface MDCrashFormatterIos : MDCrashFormatter
{
}

+ (id)formatterWithAppId:(id)arg1;
- (id)formatReport:(id)arg1 error:(id *)arg2;
- (void)overrideCrashTypeForReport:(id)arg1 crashText:(id *)arg2;
- (id)getCrashReport:(id)arg1 error:(id *)arg2;
- (void)appendMetadata:(id)arg1 metadata:(id)arg2;
- (id)initWithAppId:(id)arg1;

@end
