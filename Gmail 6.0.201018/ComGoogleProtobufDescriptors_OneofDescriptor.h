//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleProtobufDescriptors_Descriptor;

@interface ComGoogleProtobufDescriptors_OneofDescriptor : NSObject
{
    struct CGPOneofData *data_;
    ComGoogleProtobufDescriptors_Descriptor *containingType_;
}

- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)getFields;
- (id)getContainingType;
- (id)getName;
- (id)initWithData:(struct CGPOneofData *)arg1 containingType:(id)arg2;

@end
