//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaSecuritySpecECField-Protocol.h"

@class IOSIntArray, JavaMathBigInteger, NSString;

@interface JavaSecuritySpecECFieldF2m : NSObject <JavaSecuritySpecECField>
{
    int m_;
    IOSIntArray *ks_;
    JavaMathBigInteger *rp_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)getMidTermsOfReductionPolynomial;
- (id)getReductionPolynomial;
- (int)getM;
- (int)getFieldSize;
- (id)initWithInt:(int)arg1 withIntArray:(id)arg2;
- (id)initWithInt:(int)arg1 withJavaMathBigInteger:(id)arg2;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

