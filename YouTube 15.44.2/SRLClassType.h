//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>
#import <Module_Framework/SRLInstanceType-Protocol.h>

@class NSString;

@interface SRLClassType : NSObject <NSCopying, SRLInstanceType>
{
    Class _concreteClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class concreteClass; // @synthesize concreteClass=_concreteClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)doesRepresentSupertypeOfClass:(Class)arg1;
- (id)initWithClass:(Class)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

