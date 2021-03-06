//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, RKMappingResult;
@protocol RKMapperOperationDelegate, RKMappingOperationDataSource;

@interface RKMapperOperation : NSOperation
{
    NSError *_error;
    RKMappingResult *_mappingResult;
    id _representation;
    NSDictionary *_mappingsDictionary;
    id _targetObject;
    id <RKMappingOperationDataSource> _mappingOperationDataSource;
    id <RKMapperOperationDelegate> _delegate;
    NSDictionary *_metadata;
    NSMutableArray *_mappingErrors;
    NSMutableDictionary *_mutableMappingInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableMappingInfo; // @synthesize mutableMappingInfo=_mutableMappingInfo;
@property(retain, nonatomic) NSMutableArray *mappingErrors; // @synthesize mappingErrors=_mappingErrors;
@property(copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) __weak id <RKMapperOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <RKMappingOperationDataSource> mappingOperationDataSource; // @synthesize mappingOperationDataSource=_mappingOperationDataSource;
@property(nonatomic) __weak id targetObject; // @synthesize targetObject=_targetObject;
@property(retain, nonatomic) NSDictionary *mappingsDictionary; // @synthesize mappingsDictionary=_mappingsDictionary;
@property(retain, nonatomic) id representation; // @synthesize representation=_representation;
@property(retain, nonatomic) RKMappingResult *mappingResult; // @synthesize mappingResult=_mappingResult;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)execute:(id *)arg1;
- (void)main;
- (void)cancel;
- (id)mapSourceRepresentationWithMappingsDictionary:(id)arg1;
- (id)mapRepresentationOrRepresentations:(id)arg1 atKeyPath:(id)arg2 usingMapping:(id)arg3;
- (id)objectForRepresentation:(id)arg1 withMapping:(id)arg2;
- (_Bool)mapRepresentation:(id)arg1 toObject:(id)arg2 isNew:(_Bool)arg3 atKeyPath:(id)arg4 usingMapping:(id)arg5 metadataList:(id)arg6;
- (id)mapRepresentations:(id)arg1 atKeyPath:(id)arg2 usingMapping:(id)arg3;
- (id)mapRepresentation:(id)arg1 atKeyPath:(id)arg2 usingMapping:(id)arg3;
- (_Bool)isNullCollection:(id)arg1;
- (void)addErrorForUnmappableKeyPath:(id)arg1;
- (void)addErrorWithCode:(long long)arg1 message:(id)arg2 keyPath:(id)arg3 userInfo:(id)arg4;
- (void)addError:(id)arg1;
- (id)errors;
@property(readonly, nonatomic) NSDictionary *mappingInfo;
- (id)initWithRepresentation:(id)arg1 mappingsDictionary:(id)arg2;
- (id)init;

@end

