//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaNetAbstractPlainSocketImpl.h"

@interface JavaNetPlainSocketImpl : JavaNetAbstractPlainSocketImpl
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initProto;
- (void)dealloc;
- (void)socketSendUrgentDataWithInt:(int)arg1;
- (int)socketGetOptionWithInt:(int)arg1 withId:(id)arg2;
- (void)socketSetOptionWithInt:(int)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3;
- (void)socketShutdownWithInt:(int)arg1;
- (void)socketClose0;
- (int)socketAvailable;
- (void)socketAcceptWithJavaNetSocketImpl:(id)arg1;
- (void)socketListenWithInt:(int)arg1;
- (void)socketBindWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (void)socketConnectWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)socketCreateWithBoolean:(_Bool)arg1;
- (id)initPackagePrivateWithJavaIoFileDescriptor:(id)arg1;
- (id)initPackagePrivate;

@end
