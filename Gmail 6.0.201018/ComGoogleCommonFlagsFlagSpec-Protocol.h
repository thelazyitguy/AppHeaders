//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangAnnotationAnnotation-Protocol.h"

@class ComGoogleCommonFlagsDocLevel, NSString;

@protocol ComGoogleCommonFlagsFlagSpec <JavaLangAnnotationAnnotation>
@property(readonly) ComGoogleCommonFlagsDocLevel *docLevel;
@property(readonly) NSString *altName;
@property(readonly) NSString *name;
@property(readonly) NSString *help;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@end
