//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LibcoreContentTypeMimeMap_Builder_Element : NSObject
{
    NSString *mimeOrExt_;
    _Bool keepExisting_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)ofExtensionSpecWithNSString:(id)arg1;
+ (id)ofMimeSpecWithNSString:(id)arg1;
- (void)dealloc;
- (id)initWithNSString:(id)arg1 withBoolean:(_Bool)arg2;

@end

