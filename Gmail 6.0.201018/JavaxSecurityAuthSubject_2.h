//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecurityPrivilegedAction-Protocol.h"

@class JavaSecurityAccessControlContext, JavaxSecurityAuthSubject, NSString;

@interface JavaxSecurityAuthSubject_2 : NSObject <JavaSecurityPrivilegedAction>
{
    JavaxSecurityAuthSubject *val$subject_;
    JavaSecurityAccessControlContext *val$acc_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)run;
- (id)initWithJavaxSecurityAuthSubject:(id)arg1 withJavaSecurityAccessControlContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

