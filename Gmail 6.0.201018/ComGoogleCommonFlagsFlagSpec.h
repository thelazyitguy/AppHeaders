//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonFlagsFlagSpec-Protocol.h"

@class ComGoogleCommonFlagsDocLevel, NSString;

@interface ComGoogleCommonFlagsFlagSpec : NSObject <ComGoogleCommonFlagsFlagSpec>
{
    NSString *help_;
    NSString *name_;
    NSString *altName_;
    ComGoogleCommonFlagsDocLevel *docLevel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)docLevelDefault;
+ (id)altNameDefault;
+ (id)nameDefault;
@property(readonly) ComGoogleCommonFlagsDocLevel *docLevel; // @synthesize docLevel=docLevel_;
@property(readonly) NSString *altName; // @synthesize altName=altName_;
@property(readonly) NSString *name; // @synthesize name=name_;
@property(readonly) NSString *help; // @synthesize help=help_;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)annotationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
