//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTRecipientAvailability_Builder.h"

@class NSString;

@interface JBTAutoValue_RecipientAvailability_Builder : JBTRecipientAvailability_Builder
{
    NSString *displayName_;
    NSString *unsizedAvatarUrl_;
    NSString *statusMessage_;
}

- (void)dealloc;
- (id)build;
- (id)setStatusMessageWithNSString:(id)arg1;
- (id)setUnsizedAvatarUrlWithNSString:(id)arg1;
- (id)setDisplayNameWithNSString:(id)arg1;

@end
