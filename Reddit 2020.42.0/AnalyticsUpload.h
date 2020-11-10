//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnalyticsFramework/NSCoding-Protocol.h>
#import <AnalyticsFramework/NSCopying-Protocol.h>
#import <AnalyticsFramework/TBase-Protocol.h>

@class NSString;

@interface AnalyticsUpload : NSObject <TBase, NSCoding, NSCopying>
{
    _Bool _file_sizeIsSet;
    _Bool _categoryIsSet;
    _Bool _optimization_typeIsSet;
    long long _file_size;
    NSString *_category;
    NSString *_optimization_type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool optimization_typeIsSet; // @synthesize optimization_typeIsSet=_optimization_typeIsSet;
@property(copy, nonatomic) NSString *optimization_type; // @synthesize optimization_type=_optimization_type;
@property(nonatomic) _Bool categoryIsSet; // @synthesize categoryIsSet=_categoryIsSet;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) _Bool file_sizeIsSet; // @synthesize file_sizeIsSet=_file_sizeIsSet;
@property(nonatomic) long long file_size; // @synthesize file_size=_file_size;
@property(readonly, copy) NSString *description;
- (_Bool)validate:(id *)arg1;
- (_Bool)write:(id)arg1 error:(id *)arg2;
- (_Bool)read:(id)arg1 error:(id *)arg2;
- (void)unsetOptimization_type;
- (void)unsetCategory;
- (void)unsetFile_size;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile_size:(long long)arg1 category:(id)arg2 optimization_type:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

