#include "PCH.h"
#include "Color.h"

namespace XE
{
	namespace Colors
	{
#define CASE_COLOR_VALUE(SystemColorValue) case SystemColorValue.ToARGB(): return Str(#SystemColorValue)
		FStringView ColorName(FColor32 ColorValue)
		{
			switch(ColorValue.ToARGB())
			{
				CASE_COLOR_VALUE(None);
				CASE_COLOR_VALUE(AliceBlue);
				CASE_COLOR_VALUE(AntiqueWhite);
				//CASE_COLOR(Aqua);
				CASE_COLOR_VALUE(Aquamarine);
				CASE_COLOR_VALUE(Azure);
				CASE_COLOR_VALUE(Beige);
				CASE_COLOR_VALUE(Bisque);
				CASE_COLOR_VALUE(Black);
				CASE_COLOR_VALUE(BlanchedAlmond);
				CASE_COLOR_VALUE(Blue);
				CASE_COLOR_VALUE(BlueViolet);
				CASE_COLOR_VALUE(Brown);
				CASE_COLOR_VALUE(BurlyWood);
				CASE_COLOR_VALUE(CadetBlue);
				CASE_COLOR_VALUE(Chartreuse);
				CASE_COLOR_VALUE(Chocolate);
				CASE_COLOR_VALUE(Coral);
				CASE_COLOR_VALUE(CornflowerBlue);
				CASE_COLOR_VALUE(Cornsilk);
				CASE_COLOR_VALUE(Crimson);
				CASE_COLOR_VALUE(Cyan);
				CASE_COLOR_VALUE(DarkBlue);
				CASE_COLOR_VALUE(DarkCyan);
				CASE_COLOR_VALUE(DarkGoldenRod);
				CASE_COLOR_VALUE(DarkGray);
				CASE_COLOR_VALUE(DarkGreen);
				CASE_COLOR_VALUE(DarkKhaki);
				CASE_COLOR_VALUE(DarkMagenta);
				CASE_COLOR_VALUE(DarkOliveGreen);
				CASE_COLOR_VALUE(DarkOrange);
				CASE_COLOR_VALUE(DarkOrchid);
				CASE_COLOR_VALUE(DarkRed);
				CASE_COLOR_VALUE(DarkSalmon);
				CASE_COLOR_VALUE(DarkSeaGreen);
				CASE_COLOR_VALUE(DarkSlateBlue);
				CASE_COLOR_VALUE(DarkSlateGray);
				CASE_COLOR_VALUE(DarkTurquoise);
				CASE_COLOR_VALUE(DarkViolet);
				CASE_COLOR_VALUE(DeepPink);
				CASE_COLOR_VALUE(DeepSkyBlue);
				CASE_COLOR_VALUE(DimGray);
				CASE_COLOR_VALUE(DodgerBlue);
				CASE_COLOR_VALUE(FireBrick);
				CASE_COLOR_VALUE(FloralWhite);
				CASE_COLOR_VALUE(ForestGreen);
				CASE_COLOR_VALUE(Fuchsia);
				CASE_COLOR_VALUE(Gainsboro);
				CASE_COLOR_VALUE(GhostWhite);
				CASE_COLOR_VALUE(Gold);
				CASE_COLOR_VALUE(GoldenRod);
				CASE_COLOR_VALUE(Gray);
				CASE_COLOR_VALUE(Green);
				CASE_COLOR_VALUE(GreenYellow);
				CASE_COLOR_VALUE(HoneyDew);
				CASE_COLOR_VALUE(HotPink);
				CASE_COLOR_VALUE(IndianRed);
				CASE_COLOR_VALUE(Indigo);
				CASE_COLOR_VALUE(Ivory);
				CASE_COLOR_VALUE(Khaki);
				CASE_COLOR_VALUE(Lavender);
				CASE_COLOR_VALUE(LavenderBlush);
				CASE_COLOR_VALUE(LawnGreen);
				CASE_COLOR_VALUE(LemonChiffon);
				CASE_COLOR_VALUE(LightBlue);
				CASE_COLOR_VALUE(LightCoral);
				CASE_COLOR_VALUE(LightCyan);
				CASE_COLOR_VALUE(LightGoldenRodYellow);
				CASE_COLOR_VALUE(LightGray);
				CASE_COLOR_VALUE(LightGreen);
				CASE_COLOR_VALUE(LightPink);
				CASE_COLOR_VALUE(LightSalmon);
				CASE_COLOR_VALUE(LightSeaGreen);
				CASE_COLOR_VALUE(LightSkyBlue);
				CASE_COLOR_VALUE(LightSlateGray);
				CASE_COLOR_VALUE(LightSteelBlue);
				CASE_COLOR_VALUE(LightYellow);
				CASE_COLOR_VALUE(Lime);
				CASE_COLOR_VALUE(LimeGreen);
				CASE_COLOR_VALUE(Linen);
				//CASE_COLOR(Magenta);
				CASE_COLOR_VALUE(Maroon);
				CASE_COLOR_VALUE(MediumAquaMarine);
				CASE_COLOR_VALUE(MediumBlue);
				CASE_COLOR_VALUE(MediumOrchid);
				CASE_COLOR_VALUE(MediumPurple);
				CASE_COLOR_VALUE(MediumSeaGreen);
				CASE_COLOR_VALUE(MediumSlateBlue);
				CASE_COLOR_VALUE(MediumSpringGreen);
				CASE_COLOR_VALUE(MediumTurquoise);
				CASE_COLOR_VALUE(MediumVioletRed);
				CASE_COLOR_VALUE(MidnightBlue);
				CASE_COLOR_VALUE(MintCream);
				CASE_COLOR_VALUE(MistyRose);
				CASE_COLOR_VALUE(Moccasin);
				CASE_COLOR_VALUE(NavajoWhite);
				CASE_COLOR_VALUE(Navy);
				CASE_COLOR_VALUE(OldLace);
				CASE_COLOR_VALUE(Olive);
				CASE_COLOR_VALUE(OliveDrab);
				CASE_COLOR_VALUE(Orange);
				CASE_COLOR_VALUE(OrangeRed);
				CASE_COLOR_VALUE(Orchid);
				CASE_COLOR_VALUE(PaleGoldenRod);
				CASE_COLOR_VALUE(PaleGreen);
				CASE_COLOR_VALUE(PaleTurquoise);
				CASE_COLOR_VALUE(PaleVioletRed);
				CASE_COLOR_VALUE(PapayaWhip);
				CASE_COLOR_VALUE(PeachPuff);
				CASE_COLOR_VALUE(Peru);
				CASE_COLOR_VALUE(Pink);
				CASE_COLOR_VALUE(Plum);
				CASE_COLOR_VALUE(PowderBlue);
				CASE_COLOR_VALUE(Purple);
				CASE_COLOR_VALUE(Red);
				CASE_COLOR_VALUE(RosyBrown);
				CASE_COLOR_VALUE(RoyalBlue);
				CASE_COLOR_VALUE(SaddleBrown);
				CASE_COLOR_VALUE(Salmon);
				CASE_COLOR_VALUE(SandyBrown);
				CASE_COLOR_VALUE(SeaGreen);
				CASE_COLOR_VALUE(SeaShell);
				CASE_COLOR_VALUE(Sienna);
				CASE_COLOR_VALUE(Silver);
				CASE_COLOR_VALUE(SkyBlue);
				CASE_COLOR_VALUE(SlateBlue);
				CASE_COLOR_VALUE(SlateGray);
				CASE_COLOR_VALUE(Snow);
				CASE_COLOR_VALUE(SpringGreen);
				CASE_COLOR_VALUE(SteelBlue);
				CASE_COLOR_VALUE(Tan);
				CASE_COLOR_VALUE(Teal);
				CASE_COLOR_VALUE(Thistle);
				CASE_COLOR_VALUE(Tomato);
				CASE_COLOR_VALUE(Turquoise);
				CASE_COLOR_VALUE(Violet);
				CASE_COLOR_VALUE(Wheat);
				CASE_COLOR_VALUE(White);
				CASE_COLOR_VALUE(WhiteSmoke);
				CASE_COLOR_VALUE(Yellow);
				CASE_COLOR_VALUE(YellowGreen);
			default:
				return FStringView::Empty;
			}
		}

#define CASE_COLOR_NAME(SystemColorName) if (Strings::ICCompare(ColorName, FStringView(Str(#SystemColorName))) == 0) return SystemColorName
		FColor32 ColorValue(FStringView ColorName, bool * IsSystemColor)
		{
			if (IsSystemColor) *IsSystemColor = true;
			CASE_COLOR_NAME(None);
			CASE_COLOR_NAME(AliceBlue);
			CASE_COLOR_NAME(AntiqueWhite);
			CASE_COLOR_NAME(Aqua);
			CASE_COLOR_NAME(Aquamarine);
			CASE_COLOR_NAME(Azure);
			CASE_COLOR_NAME(Beige);
			CASE_COLOR_NAME(Bisque);
			CASE_COLOR_NAME(Black);
			CASE_COLOR_NAME(BlanchedAlmond);
			CASE_COLOR_NAME(Blue);
			CASE_COLOR_NAME(BlueViolet);
			CASE_COLOR_NAME(Brown);
			CASE_COLOR_NAME(BurlyWood);
			CASE_COLOR_NAME(CadetBlue);
			CASE_COLOR_NAME(Chartreuse);
			CASE_COLOR_NAME(Chocolate);
			CASE_COLOR_NAME(Coral);
			CASE_COLOR_NAME(CornflowerBlue);
			CASE_COLOR_NAME(Cornsilk);
			CASE_COLOR_NAME(Crimson);
			CASE_COLOR_NAME(Cyan);
			CASE_COLOR_NAME(DarkBlue);
			CASE_COLOR_NAME(DarkCyan);
			CASE_COLOR_NAME(DarkGoldenRod);
			CASE_COLOR_NAME(DarkGray);
			CASE_COLOR_NAME(DarkGreen);
			CASE_COLOR_NAME(DarkKhaki);
			CASE_COLOR_NAME(DarkMagenta);
			CASE_COLOR_NAME(DarkOliveGreen);
			CASE_COLOR_NAME(DarkOrange);
			CASE_COLOR_NAME(DarkOrchid);
			CASE_COLOR_NAME(DarkRed);
			CASE_COLOR_NAME(DarkSalmon);
			CASE_COLOR_NAME(DarkSeaGreen);
			CASE_COLOR_NAME(DarkSlateBlue);
			CASE_COLOR_NAME(DarkSlateGray);
			CASE_COLOR_NAME(DarkTurquoise);
			CASE_COLOR_NAME(DarkViolet);
			CASE_COLOR_NAME(DeepPink);
			CASE_COLOR_NAME(DeepSkyBlue);
			CASE_COLOR_NAME(DimGray);
			CASE_COLOR_NAME(DodgerBlue);
			CASE_COLOR_NAME(FireBrick);
			CASE_COLOR_NAME(FloralWhite);
			CASE_COLOR_NAME(ForestGreen);
			CASE_COLOR_NAME(Fuchsia);
			CASE_COLOR_NAME(Gainsboro);
			CASE_COLOR_NAME(GhostWhite);
			CASE_COLOR_NAME(Gold);
			CASE_COLOR_NAME(GoldenRod);
			CASE_COLOR_NAME(Gray);
			CASE_COLOR_NAME(Green);
			CASE_COLOR_NAME(GreenYellow);
			CASE_COLOR_NAME(HoneyDew);
			CASE_COLOR_NAME(HotPink);
			CASE_COLOR_NAME(IndianRed);
			CASE_COLOR_NAME(Indigo);
			CASE_COLOR_NAME(Ivory);
			CASE_COLOR_NAME(Khaki);
			CASE_COLOR_NAME(Lavender);
			CASE_COLOR_NAME(LavenderBlush);
			CASE_COLOR_NAME(LawnGreen);
			CASE_COLOR_NAME(LemonChiffon);
			CASE_COLOR_NAME(LightBlue);
			CASE_COLOR_NAME(LightCoral);
			CASE_COLOR_NAME(LightCyan);
			CASE_COLOR_NAME(LightGoldenRodYellow);
			CASE_COLOR_NAME(LightGray);
			CASE_COLOR_NAME(LightGreen);
			CASE_COLOR_NAME(LightPink);
			CASE_COLOR_NAME(LightSalmon);
			CASE_COLOR_NAME(LightSeaGreen);
			CASE_COLOR_NAME(LightSkyBlue);
			CASE_COLOR_NAME(LightSlateGray);
			CASE_COLOR_NAME(LightSteelBlue);
			CASE_COLOR_NAME(LightYellow);
			CASE_COLOR_NAME(Lime);
			CASE_COLOR_NAME(LimeGreen);
			CASE_COLOR_NAME(Linen);
			CASE_COLOR_NAME(Magenta);
			CASE_COLOR_NAME(Maroon);
			CASE_COLOR_NAME(MediumAquaMarine);
			CASE_COLOR_NAME(MediumBlue);
			CASE_COLOR_NAME(MediumOrchid);
			CASE_COLOR_NAME(MediumPurple);
			CASE_COLOR_NAME(MediumSeaGreen);
			CASE_COLOR_NAME(MediumSlateBlue);
			CASE_COLOR_NAME(MediumSpringGreen);
			CASE_COLOR_NAME(MediumTurquoise);
			CASE_COLOR_NAME(MediumVioletRed);
			CASE_COLOR_NAME(MidnightBlue);
			CASE_COLOR_NAME(MintCream);
			CASE_COLOR_NAME(MistyRose);
			CASE_COLOR_NAME(Moccasin);
			CASE_COLOR_NAME(NavajoWhite);
			CASE_COLOR_NAME(Navy);
			CASE_COLOR_NAME(OldLace);
			CASE_COLOR_NAME(Olive);
			CASE_COLOR_NAME(OliveDrab);
			CASE_COLOR_NAME(Orange);
			CASE_COLOR_NAME(OrangeRed);
			CASE_COLOR_NAME(Orchid);
			CASE_COLOR_NAME(PaleGoldenRod);
			CASE_COLOR_NAME(PaleGreen);
			CASE_COLOR_NAME(PaleTurquoise);
			CASE_COLOR_NAME(PaleVioletRed);
			CASE_COLOR_NAME(PapayaWhip);
			CASE_COLOR_NAME(PeachPuff);
			CASE_COLOR_NAME(Peru);
			CASE_COLOR_NAME(Pink);
			CASE_COLOR_NAME(Plum);
			CASE_COLOR_NAME(PowderBlue);
			CASE_COLOR_NAME(Purple);
			CASE_COLOR_NAME(Red);
			CASE_COLOR_NAME(RosyBrown);
			CASE_COLOR_NAME(RoyalBlue);
			CASE_COLOR_NAME(SaddleBrown);
			CASE_COLOR_NAME(Salmon);
			CASE_COLOR_NAME(SandyBrown);
			CASE_COLOR_NAME(SeaGreen);
			CASE_COLOR_NAME(SeaShell);
			CASE_COLOR_NAME(Sienna);
			CASE_COLOR_NAME(Silver);
			CASE_COLOR_NAME(SkyBlue);
			CASE_COLOR_NAME(SlateBlue);
			CASE_COLOR_NAME(SlateGray);
			CASE_COLOR_NAME(Snow);
			CASE_COLOR_NAME(SpringGreen);
			CASE_COLOR_NAME(SteelBlue);
			CASE_COLOR_NAME(Tan);
			CASE_COLOR_NAME(Teal);
			CASE_COLOR_NAME(Thistle);
			CASE_COLOR_NAME(Tomato);
			CASE_COLOR_NAME(Turquoise);
			CASE_COLOR_NAME(Violet);
			CASE_COLOR_NAME(Wheat);
			CASE_COLOR_NAME(White);
			CASE_COLOR_NAME(WhiteSmoke);
			CASE_COLOR_NAME(Yellow);
			CASE_COLOR_NAME(YellowGreen);
			else
			{
				if (IsSystemColor) *IsSystemColor = false;
				return None;
			}
		}

#define DEFINE_SYSTEM_COLOR(SystemColor) {SystemColor, Str(#SystemColor)}
		TView<FSystemColor> SystemColors()
		{
			static const FSystemColor GSystemColors[] =
			{
				DEFINE_SYSTEM_COLOR(None),
				DEFINE_SYSTEM_COLOR(AliceBlue),
				DEFINE_SYSTEM_COLOR(AntiqueWhite),
				DEFINE_SYSTEM_COLOR(Aqua),
				DEFINE_SYSTEM_COLOR(Aquamarine),
				DEFINE_SYSTEM_COLOR(Azure),
				DEFINE_SYSTEM_COLOR(Beige),
				DEFINE_SYSTEM_COLOR(Bisque),
				DEFINE_SYSTEM_COLOR(Black),
				DEFINE_SYSTEM_COLOR(BlanchedAlmond),
				DEFINE_SYSTEM_COLOR(Blue),
				DEFINE_SYSTEM_COLOR(BlueViolet),
				DEFINE_SYSTEM_COLOR(Brown),
				DEFINE_SYSTEM_COLOR(BurlyWood),
				DEFINE_SYSTEM_COLOR(CadetBlue),
				DEFINE_SYSTEM_COLOR(Chartreuse),
				DEFINE_SYSTEM_COLOR(Chocolate),
				DEFINE_SYSTEM_COLOR(Coral),
				DEFINE_SYSTEM_COLOR(CornflowerBlue),
				DEFINE_SYSTEM_COLOR(Cornsilk),
				DEFINE_SYSTEM_COLOR(Crimson),
				DEFINE_SYSTEM_COLOR(Cyan),
				DEFINE_SYSTEM_COLOR(DarkBlue),
				DEFINE_SYSTEM_COLOR(DarkCyan),
				DEFINE_SYSTEM_COLOR(DarkGoldenRod),
				DEFINE_SYSTEM_COLOR(DarkGray),
				DEFINE_SYSTEM_COLOR(DarkGreen),
				DEFINE_SYSTEM_COLOR(DarkKhaki),
				DEFINE_SYSTEM_COLOR(DarkMagenta),
				DEFINE_SYSTEM_COLOR(DarkOliveGreen),
				DEFINE_SYSTEM_COLOR(DarkOrange),
				DEFINE_SYSTEM_COLOR(DarkOrchid),
				DEFINE_SYSTEM_COLOR(DarkRed),
				DEFINE_SYSTEM_COLOR(DarkSalmon),
				DEFINE_SYSTEM_COLOR(DarkSeaGreen),
				DEFINE_SYSTEM_COLOR(DarkSlateBlue),
				DEFINE_SYSTEM_COLOR(DarkSlateGray),
				DEFINE_SYSTEM_COLOR(DarkTurquoise),
				DEFINE_SYSTEM_COLOR(DarkViolet),
				DEFINE_SYSTEM_COLOR(DeepPink),
				DEFINE_SYSTEM_COLOR(DeepSkyBlue),
				DEFINE_SYSTEM_COLOR(DimGray),
				DEFINE_SYSTEM_COLOR(DodgerBlue),
				DEFINE_SYSTEM_COLOR(FireBrick),
				DEFINE_SYSTEM_COLOR(FloralWhite),
				DEFINE_SYSTEM_COLOR(ForestGreen),
				DEFINE_SYSTEM_COLOR(Fuchsia),
				DEFINE_SYSTEM_COLOR(Gainsboro),
				DEFINE_SYSTEM_COLOR(GhostWhite),
				DEFINE_SYSTEM_COLOR(Gold),
				DEFINE_SYSTEM_COLOR(GoldenRod),
				DEFINE_SYSTEM_COLOR(Gray),
				DEFINE_SYSTEM_COLOR(Green),
				DEFINE_SYSTEM_COLOR(GreenYellow),
				DEFINE_SYSTEM_COLOR(HoneyDew),
				DEFINE_SYSTEM_COLOR(HotPink),
				DEFINE_SYSTEM_COLOR(IndianRed),
				DEFINE_SYSTEM_COLOR(Indigo),
				DEFINE_SYSTEM_COLOR(Ivory),
				DEFINE_SYSTEM_COLOR(Khaki),
				DEFINE_SYSTEM_COLOR(Lavender),
				DEFINE_SYSTEM_COLOR(LavenderBlush),
				DEFINE_SYSTEM_COLOR(LawnGreen),
				DEFINE_SYSTEM_COLOR(LemonChiffon),
				DEFINE_SYSTEM_COLOR(LightBlue),
				DEFINE_SYSTEM_COLOR(LightCoral),
				DEFINE_SYSTEM_COLOR(LightCyan),
				DEFINE_SYSTEM_COLOR(LightGoldenRodYellow),
				DEFINE_SYSTEM_COLOR(LightGray),
				DEFINE_SYSTEM_COLOR(LightGreen),
				DEFINE_SYSTEM_COLOR(LightPink),
				DEFINE_SYSTEM_COLOR(LightSalmon),
				DEFINE_SYSTEM_COLOR(LightSeaGreen),
				DEFINE_SYSTEM_COLOR(LightSkyBlue),
				DEFINE_SYSTEM_COLOR(LightSlateGray),
				DEFINE_SYSTEM_COLOR(LightSteelBlue),
				DEFINE_SYSTEM_COLOR(LightYellow),
				DEFINE_SYSTEM_COLOR(Lime),
				DEFINE_SYSTEM_COLOR(LimeGreen),
				DEFINE_SYSTEM_COLOR(Linen),
				DEFINE_SYSTEM_COLOR(Magenta),
				DEFINE_SYSTEM_COLOR(Maroon),
				DEFINE_SYSTEM_COLOR(MediumAquaMarine),
				DEFINE_SYSTEM_COLOR(MediumBlue),
				DEFINE_SYSTEM_COLOR(MediumOrchid),
				DEFINE_SYSTEM_COLOR(MediumPurple),
				DEFINE_SYSTEM_COLOR(MediumSeaGreen),
				DEFINE_SYSTEM_COLOR(MediumSlateBlue),
				DEFINE_SYSTEM_COLOR(MediumSpringGreen),
				DEFINE_SYSTEM_COLOR(MediumTurquoise),
				DEFINE_SYSTEM_COLOR(MediumVioletRed),
				DEFINE_SYSTEM_COLOR(MidnightBlue),
				DEFINE_SYSTEM_COLOR(MintCream),
				DEFINE_SYSTEM_COLOR(MistyRose),
				DEFINE_SYSTEM_COLOR(Moccasin),
				DEFINE_SYSTEM_COLOR(NavajoWhite),
				DEFINE_SYSTEM_COLOR(Navy),
				DEFINE_SYSTEM_COLOR(OldLace),
				DEFINE_SYSTEM_COLOR(Olive),
				DEFINE_SYSTEM_COLOR(OliveDrab),
				DEFINE_SYSTEM_COLOR(Orange),
				DEFINE_SYSTEM_COLOR(OrangeRed),
				DEFINE_SYSTEM_COLOR(Orchid),
				DEFINE_SYSTEM_COLOR(PaleGoldenRod),
				DEFINE_SYSTEM_COLOR(PaleGreen),
				DEFINE_SYSTEM_COLOR(PaleTurquoise),
				DEFINE_SYSTEM_COLOR(PaleVioletRed),
				DEFINE_SYSTEM_COLOR(PapayaWhip),
				DEFINE_SYSTEM_COLOR(PeachPuff),
				DEFINE_SYSTEM_COLOR(Peru),
				DEFINE_SYSTEM_COLOR(Pink),
				DEFINE_SYSTEM_COLOR(Plum),
				DEFINE_SYSTEM_COLOR(PowderBlue),
				DEFINE_SYSTEM_COLOR(Purple),
				DEFINE_SYSTEM_COLOR(Red),
				DEFINE_SYSTEM_COLOR(RosyBrown),
				DEFINE_SYSTEM_COLOR(RoyalBlue),
				DEFINE_SYSTEM_COLOR(SaddleBrown),
				DEFINE_SYSTEM_COLOR(Salmon),
				DEFINE_SYSTEM_COLOR(SandyBrown),
				DEFINE_SYSTEM_COLOR(SeaGreen),
				DEFINE_SYSTEM_COLOR(SeaShell),
				DEFINE_SYSTEM_COLOR(Sienna),
				DEFINE_SYSTEM_COLOR(Silver),
				DEFINE_SYSTEM_COLOR(SkyBlue),
				DEFINE_SYSTEM_COLOR(SlateBlue),
				DEFINE_SYSTEM_COLOR(SlateGray),
				DEFINE_SYSTEM_COLOR(Snow),
				DEFINE_SYSTEM_COLOR(SpringGreen),
				DEFINE_SYSTEM_COLOR(SteelBlue),
				DEFINE_SYSTEM_COLOR(Tan),
				DEFINE_SYSTEM_COLOR(Teal),
				DEFINE_SYSTEM_COLOR(Thistle),
				DEFINE_SYSTEM_COLOR(Tomato),
				DEFINE_SYSTEM_COLOR(Turquoise),
				DEFINE_SYSTEM_COLOR(Violet),
				DEFINE_SYSTEM_COLOR(Wheat),
				DEFINE_SYSTEM_COLOR(White),
				DEFINE_SYSTEM_COLOR(WhiteSmoke),
				DEFINE_SYSTEM_COLOR(Yellow),
				DEFINE_SYSTEM_COLOR(YellowGreen),
			};
			return GSystemColors;
		}
	}
	
	FStringView TFormatter<FColor32>::Format(const FColor32 & Color, FStringView Formal) const
	{
		for (auto & SystemColor : Colors::SystemColors())
		{
			if (SystemColor.Color == Color)
				return SystemColor.Name;
		}
		return FStringView::Empty;
	}
	
	FColor32 TFormatter<FColor32>::Parse(FStringView String) const
	{
		for (auto & SystemColor : Colors::SystemColors())
		{
			if (Strings::ICCompare(SystemColor.Name, String) == 0)
				return SystemColor.Color;
		}
		return Colors::None;
	}
}


//None                                    
//AliceBlue
//AntiqueWhite                            
//Aqua                                    
//Aquamarine                              
//Azure                                   
//Beige                                   
//Bisque                                  
//Black                                   
//BlanchedAlmond                          
//Blue                                    
//BlueViolet                              
//Brown                                   
//BurlyWood                               
//CadetBlue                               
//Chartreuse                              
//Chocolate                               
//Coral                                   
//CornflowerBlue                          
//Cornsilk                                
//Crimson                                 
//Cyan                                    
//DarkBlue                                
//DarkCyan                                
//DarkGoldenRod                           
//DarkGray                                
//DarkGreen                               
//DarkKhaki                               
//DarkMagenta                             
//DarkOliveGreen                          
//DarkOrange                              
//DarkOrchid                              
//DarkRed                                 
//DarkSalmon                              
//DarkSeaGreen                            
//DarkSlateBlue                           
//DarkSlateGray                           
//DarkTurquoise                           
//DarkViolet                              
//DeepPink                                
//DeepSkyBlue                             
//DimGray                                 
//DodgerBlue                              
//FireBrick                               
//FloralWhite                             
//ForestGreen                             
//Fuchsia                                 
//Gainsboro                               
//GhostWhite                              
//Gold                                    
//GoldenRod                               
//Gray                                    
//Green                                   
//GreenYellow                             
//HoneyDew                                
//HotPink                                 
//IndianRed                               
//Indigo                                  
//Ivory                                   
//Khaki                                   
//Lavender                                
//LavenderBlush                           
//LawnGreen                               
//LemonChiffon                            
//LightBlue                               
//LightCoral                              
//LightCyan                               
//LightGoldenRodYellow                    
//LightGray                               
//LightGreen                              
//LightPink                               
//LightSalmon                             
//LightSeaGreen                           
//LightSkyBlue                            
//LightSlateGray                          
//LightSteelBlue                          
//LightYellow                             
//Lime                                    
//LimeGreen                               
//Linen                                   
//Magenta                                 
//Maroon                                  
//MediumAquaMarine                        
//MediumBlue                              
//MediumOrchid                            
//MediumPurple                            
//MediumSeaGreen                          
//MediumSlateBlue                         
//MediumSpringGreen                       
//MediumTurquoise                         
//MediumVioletRed                         
//MidnightBlue                            
//MintCream                               
//MistyRose                               
//Moccasin                                
//NavajoWhite                             
//Navy                                    
//OldLace                                 
//Olive                                   
//OliveDrab                               
//Orange                                  
//OrangeRed                               
//Orchid                                  
//PaleGoldenRod                           
//PaleGreen                               
//PaleTurquoise                           
//PaleVioletRed                           
//PapayaWhip                              
//PeachPuff                               
//Peru                                    
//Pink                                    
//Plum                                    
//PowderBlue                              
//Purple                                  
//Red                                     
//RosyBrown                               
//RoyalBlue                               
//SaddleBrown                             
//Salmon                                  
//SandyBrown                              
//SeaGreen                                
//SeaShell                                
//Sienna                                  
//Silver                                  
//SkyBlue                                 
//SlateBlue                               
//SlateGray                               
//Snow                                    
//SpringGreen                             
//SteelBlue                               
//Tan                                     
//Teal                                    
//Thistle                                 
//Tomato                                  
//Turquoise                               
//Violet                                  
//Wheat                                   
//White                                   
//WhiteSmoke                              
//Yellow                                  
//YellowGreen                             