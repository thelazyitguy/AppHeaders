//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JavaTextNormalizer : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)normalizeNFKCWithNSString:(id)arg1;
+ (id)normalizeNFKDWithNSString:(id)arg1;
+ (id)normalizeNFCWithNSString:(id)arg1;
+ (id)normalizeNFDWithNSString:(id)arg1;
+ (id)normalizeWithJavaLangCharSequence:(id)arg1 withJavaTextNormalizer_Form:(id)arg2;
+ (_Bool)isNormalizedWithJavaLangCharSequence:(id)arg1 withJavaTextNormalizer_Form:(id)arg2;
- (id)init;

@end
