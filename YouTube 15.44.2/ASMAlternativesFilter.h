//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASMAlternativesFilter : NSObject
{
}

+ (_Bool)canOpenFeedbackUI;
+ (id)createPlaceholderAlternative;
+ (_Bool)isValidAlternative:(id)arg1 enableSingleAppSignOut:(_Bool)arg2;
+ (id)getFirstValidAlternative:(id)arg1 enableSingleAppSignOut:(_Bool)arg2;
+ (id)supportedNativeActionIdsWithEnableSingleAppSignOut:(_Bool)arg1;
+ (id)supportedAlternativeTypes;
+ (id)filterResource:(id)arg1 enableSingleAppSignOut:(_Bool)arg2;

@end

