//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Branch/NSSecureCoding-Protocol.h>

@interface BNCServerRequest : NSObject <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (void)safeSetValue:(id)arg1 forKey:(id)arg2 onDict:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)processResponse:(id)arg1 error:(id)arg2;
- (void)makeRequest:(id)arg1 key:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

