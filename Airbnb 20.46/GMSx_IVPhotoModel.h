//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GMSx_IVPhotoModel : NSObject
{
    NSArray *_floors;
    NSArray *_associatedFeatures;
    NSString *_attribution;
    NSString *_title;
    NSString *_reportAProblemURL;
    // Error parsing type: {PhotoId="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"id_"{ArenaStringPtr="ptr_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}"frontend_"i}, name: _photoID
    // Error parsing type: {PhotoHandle="photo_id_"{PhotoId="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"id_"{ArenaStringPtr="ptr_"^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}"frontend_"i}}, name: _photoHandle
    // Error parsing type: {Camera="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"location_"^{GMSx_Location}"rotation_"^{Rotation}"screen_size_"^{Size}"field_of_view_y_"f}, name: _camera
    // Error parsing type: {Photo="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadata="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"{__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >="__a_value"Ai}}}"nav_arrows_"{RepeatedPtrField<GMSx_geo_imagery_viewer::api::NavArrow>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}}"road_labels_"{RepeatedPtrField<GMSx_geo_imagery_viewer::api::RoadLabel>="arena_"^{Arena}"current_size_"i"total_size_"i"rep_"^{Rep}}"id_"^{PhotoId}"location_"^{GMSx_Location}"orientation_"^{Rotation}"original_size_"^{Size}"tile_size_"^{Size}"equirectangular_size_"^{Size}"equirectangular_offset_"^{Size}"depth_map_"^{PlanarDepthMap}"click_to_go_map_"^{ClickToGoMap}}, name: _metadata
}

- (id).cxx_construct;
- (void).cxx_destruct;
// Error parsing type for property photoHandle:
// Property attributes: T{PhotoHandle={PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}i}},N,V_photoHandle

@property(readonly, nonatomic) NSString *reportAProblemURL; // @synthesize reportAProblemURL=_reportAProblemURL;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSArray *associatedFeatures; // @synthesize associatedFeatures=_associatedFeatures;
@property(readonly, nonatomic) NSArray *floors; // @synthesize floors=_floors;
// Error parsing type for property camera:
// Property attributes: T{Camera=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}^{GMSx_Location}^{Rotation}^{Size}f},R,N,V_camera

// Error parsing type for property metadata:
// Property attributes: T{Photo=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<GMSx_geo_imagery_viewer::api::NavArrow>=^{Arena}ii^{Rep}}{RepeatedPtrField<GMSx_geo_imagery_viewer::api::RoadLabel>=^{Arena}ii^{Rep}}^{PhotoId}^{GMSx_Location}^{Rotation}^{Size}^{Size}^{Size}^{Size}^{PlanarDepthMap}^{ClickToGoMap}},R,N,V_metadata

// Error parsing type for property photoID:
// Property attributes: T{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}i},R,N,V_photoID

-     // Error parsing type: @68@0:8@16{PhotoId=^^?{InternalMetadata=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}i}24B64, name: initWithMetadataProto:forPhotoID:useSnappedPose:

@end

