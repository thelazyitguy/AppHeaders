//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaBeansFeatureDescriptor.h"

@class IOSClass;

@interface JavaBeansBeanDescriptor : JavaBeansFeatureDescriptor
{
    IOSClass *beanClass_;
    IOSClass *customizerClass_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getShortClassNameWithIOSClass:(id)arg1;
- (id)getBeanClass;
- (id)getCustomizerClass;
- (id)initWithIOSClass:(id)arg1;
- (id)initWithIOSClass:(id)arg1 withIOSClass:(id)arg2;

@end
