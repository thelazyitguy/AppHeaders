//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray;
@protocol JavaUtilList;

@interface SunSecurityJcaProviderList : NSObject
{
    IOSObjectArray *configs_;
    // Error parsing type: AB, name: allLoaded_
    id <JavaUtilList> userList_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)newListWithJavaSecurityProviderArray:(id)arg1;
+ (id)removeWithSunSecurityJcaProviderList:(id)arg1 withNSString:(id)arg2;
+ (id)insertAtWithSunSecurityJcaProviderList:(id)arg1 withJavaSecurityProvider:(id)arg2 withInt:(int)arg3;
+ (id)addWithSunSecurityJcaProviderList:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)fromSecurityProperties;
- (void)dealloc;
- (id)getServicesWithJavaUtilList:(id)arg1;
- (id)getServicesWithNSString:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getServicesWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getServiceWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)description;
- (id)toArray;
- (id)removeInvalid;
- (int)loadAll;
- (int)getIndexWithNSString:(id)arg1;
- (id)getProviderWithNSString:(id)arg1;
- (id)getProviderConfigWithNSString:(id)arg1;
- (id)providers;
- (id)getProviderWithInt:(int)arg1;
- (int)size;
- (id)getJarListWithNSStringArray:(id)arg1;
- (id)init;
- (id)initWithSunSecurityJcaProviderConfigArray:(id)arg1 withBoolean:(_Bool)arg2;

@end

