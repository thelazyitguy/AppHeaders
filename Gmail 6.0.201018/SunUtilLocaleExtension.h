//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SunUtilLocaleExtension : NSObject
{
    unsigned short key_;
    NSString *value_;
    NSString *id__;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (id)getID;
- (id)getValue;
- (unsigned short)getKey;
- (void)setValueWithNSString:(id)arg1;
- (id)initPackagePrivateWithChar:(unsigned short)arg1 withNSString:(id)arg2;
- (id)initPackagePrivateWithChar:(unsigned short)arg1;

@end
