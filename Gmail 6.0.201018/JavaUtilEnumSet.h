//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class IOSClass, IOSObjectArray, NSString;

@interface JavaUtilEnumSet : JavaUtilAbstractSet <NSCopying, JavaIoSerializable>
{
    IOSClass *elementType_;
    IOSObjectArray *universe_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getUniverseWithIOSClass:(id)arg1;
+ (id)rangeWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2;
+ (id)ofWithJavaLangEnum:(id)arg1 withJavaLangEnumArray:(id)arg2;
+ (id)ofWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2 withJavaLangEnum:(id)arg3 withJavaLangEnum:(id)arg4 withJavaLangEnum:(id)arg5;
+ (id)ofWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2 withJavaLangEnum:(id)arg3 withJavaLangEnum:(id)arg4;
+ (id)ofWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2 withJavaLangEnum:(id)arg3;
+ (id)ofWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2;
+ (id)ofWithJavaLangEnum:(id)arg1;
+ (id)complementOfWithJavaUtilEnumSet:(id)arg1;
+ (id)copyOfWithJavaUtilCollection:(id)arg1;
+ (id)copyOfWithJavaUtilEnumSet:(id)arg1;
+ (id)allOfWithIOSClass:(id)arg1;
+ (id)noneOfWithIOSClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (id)writeReplace;
- (void)typeCheckWithJavaLangEnum:(id)arg1;
- (void)complement;
- (id)java_clone;
- (void)addRangeWithJavaLangEnum:(id)arg1 withJavaLangEnum:(id)arg2;
- (void)addAll;
- (id)initWithIOSClass:(id)arg1 withJavaLangEnumArray:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
