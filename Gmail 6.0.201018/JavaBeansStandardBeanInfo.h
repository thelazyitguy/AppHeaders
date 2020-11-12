//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaBeansSimpleBeanInfo.h"

@class IOSClass, IOSObjectArray, JavaBeansBeanDescriptor;
@protocol JavaBeansBeanInfo;

@interface JavaBeansStandardBeanInfo : JavaBeansSimpleBeanInfo
{
    IOSObjectArray *additionalBeanInfo_;
    _Bool explicitMethods_;
    _Bool explicitProperties_;
    _Bool explicitEvents_;
    id <JavaBeansBeanInfo> explicitBeanInfo_;
    IOSObjectArray *events_;
    IOSObjectArray *methods_;
    IOSObjectArray *properties_;
    JavaBeansBeanDescriptor *beanDescriptor_;
    IOSClass *beanClass_;
    int defaultEventIndex_;
    int defaultPropertyIndex_;
    _Bool canAddPropertyChangeListener_;
    _Bool canRemovePropertyChangeListener_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (_Bool)isValidPropertyWithNSString:(id)arg1;
+ (void)introspectGetListenerMethodsWithJavaLangReflectMethod:(id)arg1 withJavaUtilHashMap:(id)arg2;
+ (id)introspectListenerMethodsWithIOSClass:(id)arg1;
+ (void)introspectListenerMethodsWithNSString:(id)arg1 withJavaLangReflectMethod:(id)arg2 withJavaUtilHashMap:(id)arg3;
+ (void)introspectSetWithJavaLangReflectMethod:(id)arg1 withJavaUtilHashMap:(id)arg2;
+ (void)introspectGetWithJavaLangReflectMethod:(id)arg1 withJavaUtilHashMap:(id)arg2;
+ (id)getQualifiedNameWithJavaLangReflectMethod:(id)arg1;
+ (id)internalAsMapWithJavaBeansEventSetDescriptorArray:(id)arg1;
+ (id)internalAsMapWithJavaBeansMethodDescriptorArray:(id)arg1;
+ (id)internalAsMapWithJavaBeansPropertyDescriptorArray:(id)arg1;
+ (void)mergeAttributesWithJavaBeansPropertyDescriptor:(id)arg1 withJavaBeansPropertyDescriptor:(id)arg2;
- (void)dealloc;
- (void)init__;
- (id)introspectEvents;
- (void)fixGetSetWithJavaUtilHashMap:(id)arg1;
- (void)introspectPropertyListenerWithJavaLangReflectMethod:(id)arg1;
- (_Bool)isInSuperWithJavaBeansMethodDescriptor:(id)arg1 withJavaBeansMethodDescriptorArray:(id)arg2;
- (id)introspectPropertiesWithIOSClass:(id)arg1;
- (id)introspectMethodsWithBoolean:(_Bool)arg1 withIOSClass:(id)arg2;
- (id)introspectMethodsWithBoolean:(_Bool)arg1;
- (id)introspectMethods;
- (id)mergeEventsWithJavaBeansEventSetDescriptorArray:(id)arg1 withInt:(int)arg2;
- (id)mergeMethodsWithJavaBeansMethodDescriptorArray:(id)arg1;
- (id)capitalizeWithNSString:(id)arg1;
- (id)mergePropsWithJavaBeansPropertyDescriptorArray:(id)arg1 withInt:(int)arg2;
- (void)mergeBeanInfoWithJavaBeansBeanInfo:(id)arg1 withBoolean:(_Bool)arg2;
- (int)getDefaultPropertyIndex;
- (int)getDefaultEventIndex;
- (id)getBeanDescriptor;
- (id)getPropertyDescriptors;
- (id)getMethodDescriptors;
- (id)getEventSetDescriptors;
- (id)getAdditionalBeanInfo;
- (id)initPackagePrivateWithIOSClass:(id)arg1 withJavaBeansBeanInfo:(id)arg2 withIOSClass:(id)arg3;

@end
