//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DrishtiGraphGPUData;
@protocol MTLCommandQueue, MTLDevice;

@interface DrishtiMetalHelper : NSObject
{
    DrishtiGraphGPUData *_gpuShared;
}

+ (Status_154abcfe)setupInputSidePackets:(Collection_a8713980 *)arg1;
+     // Error parsing type: {Status=Q}24@0:8^{CalculatorContract=^{CalculatorGraphConfig_Node}{OptionsMap=^{CalculatorGraphConfig_Node}{TypeMap={map<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void>, std::__1::less<mediapipe::tool::TypeIndex>, std::__1::allocator<std::__1::pair<const mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> > > >={__tree<std::__1::__value_type<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> >, std::__1::__map_value_compare<mediapipe::tool::TypeIndex, std::__1::__value_type<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> >, std::__1::less<mediapipe::tool::TypeIndex>, true>, std::__1::allocator<std::__1::__value_type<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<mediapipe::tool::TypeIndex, std::__1::__value_type<mediapipe::tool::TypeIndex, std::__1::shared_ptr<void> >, std::__1::less<mediapipe::tool::TypeIndex>, true> >=Q}}}}}{unique_ptr<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >={__compressed_pair<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> *, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >=^{Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>}}}{unique_ptr<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >={__compressed_pair<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> *, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >=^{Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>}}}{unique_ptr<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >={__compressed_pair<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> *, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >=^{Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>}}}{unique_ptr<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >={__compressed_pair<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> *, std::__1::default_delete<mediapipe::internal::Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler> > >=^{Collection<mediapipe::PacketType, mediapipe::internal::CollectionStorage::kStoreValue, mediapipe::PacketTypeSetErrorHandler>}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{DrishtiOptions=^^?{InternalMetadata=^v}{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, proto2::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, proto2::internal::ExtensionSet::Extension> > >})}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{map<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, mediapipe::CalculatorContract::GraphServiceRequest>, std::__1::less<std::__1::basic_string<char> >, true> >=Q}}}B{TimestampDiff={StrongInt<mediapipe::TimestampBaseType_safe_tag_, long long, mediapipe::intops::SafeIntStrongIntValidator<mediapipe::intops::LogFatalOnError> >=q}}}16, name: updateContract:
- (void).cxx_destruct;
- (id)newLibraryWithResourceName:(id)arg1 error:(id *)arg2;
- (struct GpuBuffer)drishtiGpuBufferWithWidth:(int)arg1 height:(int)arg2 format:(unsigned int)arg3;
- (struct GpuBuffer)drishtiGpuBufferWithWidth:(int)arg1 height:(int)arg2;
- (id)metalTextureWithGpuBuffer:(const struct GpuBuffer *)arg1 plane:(unsigned long long)arg2;
- (id)metalTextureWithGpuBuffer:(const struct GpuBuffer *)arg1;
- (struct __CVBuffer *)copyCVMetalTextureWithGpuBuffer:(const struct GpuBuffer *)arg1;
- (struct __CVBuffer *)copyCVMetalTextureWithGpuBuffer:(const struct GpuBuffer *)arg1 plane:(unsigned long long)arg2;
- (id)commandBuffer;
@property(readonly) struct __CVMetalTextureCache *mtlTextureCache;
@property(readonly) id <MTLCommandQueue> mtlCommandQueue;
@property(readonly) id <MTLDevice> mtlDevice;
- (id)initWithSidePackets:(const Collection_46bcd669 *)arg1;
- (id)initWithCalculatorContext:(struct CalculatorContext *)arg1;
- (id)initWithGpuSharedData:(struct GpuSharedData *)arg1;
-     // Error parsing type: @24@0:8^{GpuResources={map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::less<std::__1::basic_string<char> >, true> >=Q}}}{map<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> > > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<drishti::GlContext> >, std::__1::less<std::__1::basic_string<char> >, true> >=Q}}}{GpuBufferMultiPool={Mutex={atomic<long>={__cxx_atomic_impl<long, std::__1::__cxx_atomic_base_impl<long> >=Aq}}}{unordered_map<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry, drishti::GpuBufferMultiPool::BufferSpecHash, std::__1::equal_to<drishti::GpuBufferMultiPool::BufferSpec>, std::__1::allocator<std::__1::pair<const drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry> > >={__hash_table<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, std::__1::__unordered_map_hasher<drishti::GpuBufferMultiPool::BufferSpec, std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, drishti::GpuBufferMultiPool::BufferSpecHash, true>, std::__1::__unordered_map_equal<drishti::GpuBufferMultiPool::BufferSpec, std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, std::__1::equal_to<drishti::GpuBufferMultiPool::BufferSpec>, true>, std::__1::allocator<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<drishti::GpuBufferMultiPool::BufferSpec, std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, drishti::GpuBufferMultiPool::BufferSpecHash, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<drishti::GpuBufferMultiPool::BufferSpec, std::__1::__hash_value_type<drishti::GpuBufferMultiPool::BufferSpec, drishti::GpuBufferMultiPool::Entry>, std::__1::equal_to<drishti::GpuBufferMultiPool::BufferSpec>, true> >=f}}}{EntryList=^{Entry}^{Entry}Q}i{vector<CFHolder<__CVOpenGLESTextureCache *>, std::__1::allocator<CFHolder<__CVOpenGLESTextureCache *> > >=^{CFHolder<__CVOpenGLESTextureCache *>}^{CFHolder<__CVOpenGLESTextureCache *>}{__compressed_pair<CFHolder<__CVOpenGLESTextureCache *> *, std::__1::allocator<CFHolder<__CVOpenGLESTextureCache *> > >=^{CFHolder<__CVOpenGLESTextureCache *>}}}}@{map<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor>, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> > > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> > > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> >, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<mediapipe::Executor> >, std::__1::less<std::__1::basic_string<char> >, true> >=Q}}}}16, name: initWithGpuResources:

@end

