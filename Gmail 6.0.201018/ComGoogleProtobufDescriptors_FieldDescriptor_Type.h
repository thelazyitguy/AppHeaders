//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "NSCopying-Protocol.h"

@class ComGoogleProtobufDescriptors_FieldDescriptor_JavaType;

@interface ComGoogleProtobufDescriptors_FieldDescriptor_Type : JavaLangEnum <NSCopying>
{
    ComGoogleProtobufDescriptors_FieldDescriptor_JavaType *javaType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
+ (id)valueOfWithComGoogleProtobufDescriptorProtos_FieldDescriptorProto_Type:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getJavaType;
- (id)toProto;

@end
